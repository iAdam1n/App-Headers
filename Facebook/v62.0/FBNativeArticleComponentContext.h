/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedToolbox, PAInterfaceGuide, NSArray, NSDictionary;

@interface FBNativeArticleComponentContext : NSObject {

	FBFeedToolbox* _toolbox;
	PAInterfaceGuide* _interfaceGuide;
	NSArray* _trackingCodes;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,__weak,readonly) FBFeedToolbox * toolbox;                 //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) PAInterfaceGuide * interfaceGuide;              //@synthesize interfaceGuide=_interfaceGuide - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                   //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
-(FBFeedToolbox *)toolbox;
-(NSDictionary *)analyticsInfo;
-(NSArray *)trackingCodes;
-(PAInterfaceGuide *)interfaceGuide;
-(id)initWithToolbox:(id)arg1 interfaceGuide:(id)arg2 trackingCodes:(id)arg3 analyticsInfo:(id)arg4 ;
@end
