/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface GIDSignInInternalOptions : NSObject {

	BOOL _interactive;
	BOOL _allowsWebView;
	BOOL _allowsBrowser;
	BOOL _allowsExtension;
	BOOL _allowsSafariViewController;
	NSDictionary* _extraParams;
	/*^block*/id _fallbackHandler;

}

@property (nonatomic,readonly) BOOL interactive;                             //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,readonly) BOOL allowsWebView;                           //@synthesize allowsWebView=_allowsWebView - In the implementation block
@property (nonatomic,readonly) BOOL allowsBrowser;                           //@synthesize allowsBrowser=_allowsBrowser - In the implementation block
@property (nonatomic,readonly) BOOL allowsExtension;                         //@synthesize allowsExtension=_allowsExtension - In the implementation block
@property (nonatomic,readonly) BOOL allowsSafariViewController;              //@synthesize allowsSafariViewController=_allowsSafariViewController - In the implementation block
@property (nonatomic,readonly) NSDictionary * extraParams;                   //@synthesize extraParams=_extraParams - In the implementation block
@property (nonatomic,readonly) id fallbackHandler;                           //@synthesize fallbackHandler=_fallbackHandler - In the implementation block
+(id)silentOptions;
+(id)optionsWithExtraParams:(id)arg1 ;
+(id)optionsWithExtraParams:(id)arg1 fallbackHandler:(/*^block*/id)arg2 ;
+(id)firstPartyOptionsWithFallbackHandler:(/*^block*/id)arg1 ;
+(id)defaultOptions;
-(BOOL)allowsBrowser;
-(BOOL)allowsWebView;
-(BOOL)allowsSafariViewController;
-(NSDictionary *)extraParams;
-(id)fallbackHandler;
-(BOOL)allowsExtension;
-(BOOL)interactive;
@end
