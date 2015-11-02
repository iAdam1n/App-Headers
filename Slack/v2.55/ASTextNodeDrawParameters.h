/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Slack/Slack-Structs.h>
@class ASTextNodeRenderer, ASTextNodeShadower;

@interface ASTextNodeDrawParameters : NSObject {

	ASTextNodeRenderer* _renderer;
	ASTextNodeShadower* _shadower;
	CGColorRef _backgroundColor;
	CGPoint _textOrigin;

}

@property (nonatomic,readonly) ASTextNodeRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) ASTextNodeShadower * shadower;              //@synthesize shadower=_shadower - In the implementation block
@property (nonatomic,readonly) CGPoint textOrigin;                         //@synthesize textOrigin=_textOrigin - In the implementation block
@property (nonatomic,readonly) CGColorRef backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)initWithRenderer:(id)arg1 shadower:(id)arg2 textOrigin:(CGPoint)arg3 backgroundColor:(CGColorRef)arg4 ;
-(ASTextNodeShadower *)shadower;
-(CGPoint)textOrigin;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(ASTextNodeRenderer *)renderer;
@end
