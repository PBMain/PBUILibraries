//
//  JPSImagePickerController.h
//  JPSImagePickerController
//
//  Created by JP Simard on 1/31/2014.
//  Copyright (c) 2014 JP Simard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

@protocol JPSImagePickerDelegate;

@interface JPSImagePickerController : UIViewController

#pragma mark - Device Orientation Related
@property (strong, nonatomic) CMMotionManager *motionManager;
@property (readwrite, nonatomic) UIDeviceOrientation deviceOrientation;

#pragma mark - Feature Flags

// Tinkerbell button (Default NO)
@property (nonatomic, assign) BOOL tinkerbellButtonVisible;
// Confirmation screen enabled, default YES
@property (nonatomic, assign) BOOL editingEnabled;
// Zooming in confirmation screen enabled, default YES
@property (nonatomic, assign) BOOL zoomEnabled;
// Volume up button as trigger enabled, default YES
@property (nonatomic, assign) BOOL volumeButtonTakesPicture;
// State of flashlight toggle, default YES
@property (nonatomic, assign, getter=isFlashlightEnabled) BOOL flashlightEnabled;
@property (nonatomic, assign, getter=isTinkerbellEnabled) BOOL tinkerbellEnabled;
@property (nonatomic, assign) BOOL isFlashAuto;
@property (nonatomic) UIView *flashView;
#pragma mark - Confirmation Overlay Options

// String shown above image in confirmation screen, default nil
@property (nonatomic, copy)   NSString *confirmationString;
// String shown overlayed on image in confirmation screen, default nil
@property (nonatomic, copy)   NSString *confirmationOverlayString;
// Background color of string shown overlayed on image in confirmation screen, default nil
@property (nonatomic, strong) UIColor  *confirmationOverlayBackgroundColor;
@property (nonatomic) NSTimer *pressTimer;
@property (nonatomic, assign) BOOL isVideoRecording;
@property (nonatomic, assign) BOOL onlyAllowStillImages;
@property (nonatomic, assign) BOOL shouldIgnoreNextCamButtonInput;
#pragma mark - Delegate

@property (nonatomic, weak) id<JPSImagePickerDelegate> delegate;

@end

#pragma mark - Protocol

@protocol JPSImagePickerDelegate <NSObject>

@optional

// Called immediately after the picture was taken
- (void)picker:(JPSImagePickerController *)picker didTakePicture:(NSData *)picture;
- (void)picker:(JPSImagePickerController *)picker didTakeUIImage:(UIImage *)picture;
// Called immediately after the "Use" button was tapped
- (void)picker:(JPSImagePickerController *)picker didConfirmPicture:(UIImage *)picture;
// Called immediately after the "Cancel" button was tapped
- (void)pickerDidCancel:(JPSImagePickerController *)picker;
@optional
- (void)picker: (JPSImagePickerController *)picker didRecordVideoAtUrl: (NSURL*)url;


@end
