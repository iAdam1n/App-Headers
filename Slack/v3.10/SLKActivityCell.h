/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/SLKBaseCell.h>

@protocol SLKMessageGenerics;
@interface SLKActivityCell : SLKBaseCell {

	id<SLKMessageGenerics> _message;

}

@property (nonatomic,retain) id<SLKMessageGenerics> message;              //@synthesize message=_message - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 dependencies:(id)arg3 ;
-(void)prepareForReuse;
-(void)setMessage:(id<SLKMessageGenerics>)arg1 ;
-(id<SLKMessageGenerics>)message;
@end
