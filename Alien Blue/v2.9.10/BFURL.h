/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(NSURL *)targetURL;
-(NSURL *)inputURL;
@end

