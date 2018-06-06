//
//  VideoRecordTimer.h
//  PBPodUILibraries
//
//  Created by Philippe Belley on 4/26/18.
//

#import <UIKit/UIKit.h>

@interface VideoRecordTimer : UIView
@property (weak, nonatomic) IBOutlet UIView *redCircle;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;

- (void)totalSecondsToDate: (NSTimeInterval) time;
- (void) toggleRedCircle;
@end
