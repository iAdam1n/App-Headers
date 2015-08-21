/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTableViewCell.h>

@class TFNTwitterAccount, UIImageView;

@interface T1ConversationContextCell : TFNTableViewCell {

	TFNTwitterAccount* _account;
	unsigned long long _options;
	UIImageView* _connectorEllipsisView;

}
+(double)height;
-(void)_legacyLayoutSubviews;
-(void)setConversation:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(id)_verticalEllipsisImage;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
@end

