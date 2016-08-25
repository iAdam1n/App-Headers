/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibView.h>

@class S8Label, UIView, NSArray;

@interface RepeatableGameplayInfoFAQRowView : XibView {

	S8Label* _infoLabel;
	S8Label* _profileLabel;
	UIView* _medalsView;
	UIView* _backgroundView;
	NSArray* _medalImageViews;
	NSArray* _medalCountLabels;

}

@property (nonatomic,retain) S8Label * infoLabel;                     //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) S8Label * profileLabel;                  //@synthesize profileLabel=_profileLabel - In the implementation block
@property (nonatomic,retain) UIView * medalsView;                     //@synthesize medalsView=_medalsView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * medalImageViews;               //@synthesize medalImageViews=_medalImageViews - In the implementation block
@property (nonatomic,retain) NSArray * medalCountLabels;              //@synthesize medalCountLabels=_medalCountLabels - In the implementation block
-(S8Label *)profileLabel;
-(UIView *)medalsView;
-(NSArray *)medalImageViews;
-(NSArray *)medalCountLabels;
-(void)setupWithString:(id)arg1 imageOn:(BOOL)arg2 style:(int)arg3 leagues:(id)arg4 ;
-(void)setProfileLabel:(S8Label *)arg1 ;
-(void)setMedalsView:(UIView *)arg1 ;
-(void)setMedalImageViews:(NSArray *)arg1 ;
-(void)setMedalCountLabels:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(S8Label *)infoLabel;
-(void)setInfoLabel:(S8Label *)arg1 ;
@end

