/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSURL, FBMemOpenGraphObject;

@interface FBOpenGraphObjectIntentTarget : FBIntentTarget {

	NSURL* _URL;

}

@property (nonatomic,readonly) FBMemOpenGraphObject * openGraphObject; 
@property (nonatomic,copy,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
+(id)openGraphObjectTargetForURL:(id)arg1 ;
+(id)openGraphObjectTargetWithOpenGraphObject:(id)arg1 ;
-(id)fallbackURLs;
-(FBMemOpenGraphObject *)openGraphObject;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
@end
