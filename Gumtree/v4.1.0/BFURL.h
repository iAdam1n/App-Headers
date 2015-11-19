/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSDictionary, BFAppLink;

@interface BFURL : NSObject {

	NSURL* _targetURL;
	NSDictionary* _targetQueryParameters;
	NSDictionary* _appLinkData;
	NSDictionary* _appLinkExtras;
	BFAppLink* _appLinkReferer;
	NSURL* _inputURL;
	NSDictionary* _inputQueryParameters;

}

@property (nonatomic,readonly) NSURL * targetURL;                                 //@synthesize targetURL=_targetURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * targetQueryParameters;              //@synthesize targetQueryParameters=_targetQueryParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * appLinkData;                        //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,readonly) NSDictionary * appLinkExtras;                      //@synthesize appLinkExtras=_appLinkExtras - In the implementation block
@property (nonatomic,readonly) BFAppLink * appLinkReferer;                        //@synthesize appLinkReferer=_appLinkReferer - In the implementation block
@property (nonatomic,readonly) NSURL * inputURL;                                  //@synthesize inputURL=_inputURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputQueryParameters;               //@synthesize inputQueryParameters=_inputQueryParameters - In the implementation block
+(id)URLForRenderBackToReferrerBarURL:(id)arg1 ;
+(id)queryParametersForURL:(id)arg1 ;
+(id)decodeURLString:(id)arg1 ;
+(id)URLWithURL:(id)arg1 ;
+(id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2 ;
-(NSDictionary *)appLinkData;
-(BFAppLink *)appLinkReferer;
-(id)initWithURL:(id)arg1 forOpenInboundURL:(BOOL)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(BOOL)arg4 ;
-(NSDictionary *)targetQueryParameters;
-(NSDictionary *)appLinkExtras;
-(NSDictionary *)inputQueryParameters;
-(NSURL *)inputURL;
-(NSURL *)targetURL;
@end
