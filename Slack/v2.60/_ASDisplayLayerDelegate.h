/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol _ASDisplayLayerDelegate <NSObject>
@optional
+(void)drawRect:(CGRect)arg1 withParameters:(id)arg2 isCancelled:(/*^block*/id)arg3 isRasterizing:(BOOL)arg4;
+(id)displayWithParameters:(id)arg1 isCancelled:(/*^block*/id)arg2;
-(id)drawParametersForAsyncLayer:(id)arg1;
-(void)willDisplayAsyncLayer:(id)arg1;
-(void)didDisplayAsyncLayer:(id)arg1;
-(void)displayAsyncLayer:(id)arg1 asynchronously:(BOOL)arg2;
-(void)cancelDisplayAsyncLayer:(id)arg1;

@end
