/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>

@class UIButton, TFNTwitterStatus;

@interface T1FilteredTweetInlineActionCell : TFNTableViewCell {

	UIButton* _reportButton;
	UIButton* _tweetOkButton;
	TFNTwitterStatus* _status;

}

@property (nonatomic,retain) TFNTwitterStatus * status;              //@synthesize status=_status - In the implementation block
+(double)heightWithText:(id)arg1 ;
-(id)scribePage;
-(id)scribeSection;
-(void)_reportButtonTapped;
-(void)_tweetOkButtonTapped;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
@end

