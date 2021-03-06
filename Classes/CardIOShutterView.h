//
//  ShutterView.h
//  See the file "LICENSE.md" for the full license governing this code.
//

#import <UIKit/UIKit.h>


@interface CardIOShutterView : UIView

- (void)setOpen:(BOOL)shouldBeOpen animated:(BOOL)animated duration:(CFTimeInterval)duration;

@property(nonatomic, assign, readwrite) BOOL open;

@end
