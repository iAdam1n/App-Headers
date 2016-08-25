/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

