/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/VungleOperation.h>

@protocol VungleJSCommandDelegateVungleMRAIDCommandDelegate;
@class NSString, NSDictionary, UIWebView;

@interface VungleJSCommandOperation : VungleOperation {

	BOOL _isArbitraryJavascript;
	id<VungleJSCommandDelegate><VungleMRAIDCommandDelegate> _delegate;
	/*^block*/id _resultBlock;
	NSString* _command;
	NSDictionary* _parameters;
	UIWebView* _webView;

}

@property (nonatomic,retain) NSString * command;                                                                   //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                                            //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                                  //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<VungleJSCommandDelegate><VungleMRAIDCommandDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id resultBlock;                                                                         //@synthesize resultBlock=_resultBlock - In the implementation block
@property (assign,nonatomic) BOOL isArbitraryJavascript;                                                           //@synthesize isArbitraryJavascript=_isArbitraryJavascript - In the implementation block
-(void)finishWithErrors:(id)arg1 ;
-(id)initWithCommand:(id)arg1 parameters:(id)arg2 webView:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(id)initWithCommand:(id)arg1 parameters:(id)arg2 webView:(id)arg3 ;
-(id)constructJavascriptExpression;
-(BOOL)isArbitraryJavascript;
-(void)setIsArbitraryJavascript:(BOOL)arg1 ;
-(void)setDelegate:(id<VungleJSCommandDelegate><VungleMRAIDCommandDelegate>)arg1 ;
-(id<VungleJSCommandDelegate><VungleMRAIDCommandDelegate>)delegate;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(void)execute;
@end
