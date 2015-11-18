/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIActivityViewController.h>

@class UIVisualEffectView, UILabel, NSString;

@interface PTHTweetbotActivityViewController : UIActivityViewController {

	UIVisualEffectView* _sourceTitleView;
	UILabel* _sourceTitleLabel;
	NSString* _sourceTitle;

}

@property (nonatomic,retain) NSString * sourceTitle;              //@synthesize sourceTitle=_sourceTitle - In the implementation block
-(void)setSourceTitle:(NSString *)arg1 ;
-(BOOL)_isInPopover;
-(NSString *)sourceTitle;
-(id)_sourceTitleContainerView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_layoutTitleView;
@end
