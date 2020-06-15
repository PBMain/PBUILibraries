//
//  JPSVolumeButtonHandler.h
//  JPSImagePickerController
//
//  Created by JP Simard on 1/31/2014.
//  Copyright (c) 2014 JP Simard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^JPSVolumeButtonBlock)();

@interface JPSVolumeButtonHandler : NSObject

// A block to run when the volume up button is pressed
@property (nonatomic, copy) JPSVolumeButtonBlock upBlock;

// A block to run when the volume down button is pressed
@property (nonatomic, copy) JPSVolumeButtonBlock downBlock;

// Returns a singleton with the specified up/down volume button handlers
+ (instancetype)volumeButtonHandlerWithUpBlock:(JPSVolumeButtonBlock)upBlock downBlock:(JPSVolumeButtonBlock)downBlock;

+ (BOOL) isAppExtension;

+ (UIApplication *) sharedUIApplication;
@end
