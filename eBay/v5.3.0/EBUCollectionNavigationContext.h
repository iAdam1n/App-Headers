/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAppNavigationContext.h>

@class FeedCollection;

@interface EBUCollectionNavigationContext : EBUAppNavigationContext {

	FeedCollection* _collection;

}

@property (nonatomic,retain) FeedCollection * collection;              //@synthesize collection=_collection - In the implementation block
+(id)contextWithCollection:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(FeedCollection *)collection;
-(void)setCollection:(FeedCollection *)arg1 ;
@end

