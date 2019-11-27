//
//  CameraControllerViewController.h
//  PhotoButler
//
//  Created by Mirant on 24/01/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface OverlayPosePopup : UIView {
    
}

@property (nonatomic) IBOutlet UIView *innerView;
@property (nonatomic) IBOutlet UIView *shadowView;
@property (nonatomic) IBOutlet UIView *outerView;
@property (nonatomic) IBOutlet UIImageView *imgPerson;
@property (nonatomic) IBOutlet UIImageView *imgHands;
@property (nonatomic) IBOutlet UILabel *lblTopLine;
@property (nonatomic) IBOutlet UILabel *lblBottomLine;

- (void)fadeOut;

@end
