/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBDirectInboxBucket;

@interface FBSnacksInboxRowComponentModel : NSObject {

	BOOL _shouldRenderFullSeparator;
	FBDirectInboxBucket* _bucket;

}

@property (nonatomic,readonly) FBDirectInboxBucket * bucket;                //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,readonly) BOOL shouldRenderFullSeparator;              //@synthesize shouldRenderFullSeparator=_shouldRenderFullSeparator - In the implementation block
-(id)initWithBucket:(id)arg1 shouldRenderFullSeparator:(BOOL)arg2 ;
-(BOOL)shouldRenderFullSeparator;
-(FBDirectInboxBucket *)bucket;
@end

