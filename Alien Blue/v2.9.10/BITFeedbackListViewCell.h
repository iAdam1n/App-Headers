/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol BITFeedbackListViewCellDelegate;
@class BITFeedbackMessage, BITAttributedLabel, NSDateFormatter, UILabel, NSMutableArray, UIView;

@interface BITFeedbackListViewCell : UITableViewCell {

	BITFeedbackMessage* _message;
	unsigned long long _style;
	unsigned long long _backgroundStyle;
	BITAttributedLabel* _labelText;
	id<BITFeedbackListViewCellDelegate> _delegate;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	UILabel* _labelTitle;
	NSMutableArray* _attachmentViews;
	UIView* _accessoryBackgroundView;
	id _updateAttachmentNotification;

}

@property (nonatomic,retain) BITFeedbackMessage * message;                                     //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;                               //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) BITAttributedLabel * labelText;                                   //@synthesize labelText=_labelText - In the implementation block
@property (assign,nonatomic,__weak) id<BITFeedbackListViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeFormatter;                                  //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (nonatomic,retain) UILabel * labelTitle;                                             //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) NSMutableArray * attachmentViews;                                 //@synthesize attachmentViews=_attachmentViews - In the implementation block
@property (nonatomic,retain) UIView * accessoryBackgroundView;                                 //@synthesize accessoryBackgroundView=_accessoryBackgroundView - In the implementation block
@property (nonatomic,retain) id updateAttachmentNotification;                                  //@synthesize updateAttachmentNotification=_updateAttachmentNotification - In the implementation block
+(double)heightForTextInRowWithMessage:(id)arg1 tableViewWidth:(double)arg2 ;
+(double)heightForRowWithMessage:(id)arg1 tableViewWidth:(double)arg2 ;
-(void)unregisterObservers;
-(void)registerObservers;
-(void)updateAttachmentFromNotification:(id)arg1 ;
-(void)imageButtonPressed:(id)arg1 ;
-(UIView *)accessoryBackgroundView;
-(void)setAccessoryBackgroundView:(UIView *)arg1 ;
-(UILabel *)labelTitle;
-(BOOL)isSameDayWithDate1:(id)arg1 date2:(id)arg2 ;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(id)updateAttachmentNotification;
-(void)setUpdateAttachmentNotification:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<BITFeedbackListViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<BITFeedbackListViewCellDelegate>)delegate;
-(unsigned long long)backgroundStyle;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BITFeedbackMessage *)message;
-(void)setMessage:(BITFeedbackMessage *)arg1 ;
-(void)setAttachments:(id)arg1 ;
-(BITAttributedLabel *)labelText;
-(void)setLabelText:(BITAttributedLabel *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)timeFormatter;
-(NSDateFormatter *)dateFormatter;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setAttachmentViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attachmentViews;
@end

