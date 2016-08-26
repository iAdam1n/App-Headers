/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedToolbox;

@interface FBMULightboxUFIComponentContext : NSObject {

	SEL _shareAction;
	SEL _commentAction;
	SEL _countsAction;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) SEL shareAction;                      //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,readonly) SEL commentAction;                    //@synthesize commentAction=_commentAction - In the implementation block
@property (nonatomic,readonly) SEL countsAction;                     //@synthesize countsAction=_countsAction - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
-(FBFeedToolbox *)toolbox;
-(id)initWithShareAction:(SEL)arg1 commentAction:(SEL)arg2 countsAction:(SEL)arg3 toolbox:(id)arg4 ;
-(SEL)commentAction;
-(SEL)countsAction;
-(SEL)shareAction;
@end
