/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSArray, NSURL, FBMemOpenGraphAction;

@interface FBOpenGraphActionIntentTarget : FBIntentTarget {

	NSArray* _iOSURLStrings;
	NSURL* _fallbackURL;

}

@property (nonatomic,readonly) FBMemOpenGraphAction * openGraphAction; 
@property (nonatomic,copy,readonly) NSArray * iOSURLStrings;                        //@synthesize iOSURLStrings=_iOSURLStrings - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;                            //@synthesize fallbackURL=_fallbackURL - In the implementation block
+(id)openGraphActionTargetWithOpenGraphAction:(id)arg1 ;
+(id)openGraphActionTargetWithIOSURLStrings:(id)arg1 fallbackURL:(id)arg2 ;
-(FBMemOpenGraphAction *)openGraphAction;
-(id)fallbackURLs;
-(NSArray *)iOSURLStrings;
-(id)description;
-(NSURL *)fallbackURL;
@end

