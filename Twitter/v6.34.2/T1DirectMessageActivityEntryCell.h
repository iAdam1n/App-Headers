/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1DirectMessageAbstractConversationEntryCell.h>
#import <Twitter/TFNAttributedTextViewDelegate.h>

@class TFNAttributedTextView, UIImageView, T1DirectMessageActivityEntryDisplayModel, NSString;

@interface T1DirectMessageActivityEntryCell : T1DirectMessageAbstractConversationEntryCell <TFNAttributedTextViewDelegate> {

	TFNAttributedTextView* _activityLabel;
	UIImageView* _accessoryImageView;

}

@property (nonatomic,retain) T1DirectMessageActivityEntryDisplayModel * entryDisplayModel; 
@property (nonatomic,retain) TFNAttributedTextView * activityLabel;                                     //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryImageView;                                          //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(CGRect)arg3 ;
-(void)setEntryDisplayModel:(T1DirectMessageActivityEntryDisplayModel *)arg1 ;
-(void)_updateAccessoryImageViewWithActivityEntryDisplayModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)accessibilityActivate;
-(UIImageView *)accessoryImageView;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)setActivityLabel:(TFNAttributedTextView *)arg1 ;
-(TFNAttributedTextView *)activityLabel;
@end

