/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxServerContext.h>

@class NSArray, NSString;

@interface FBQuickPromotionServerContext : NSObject <FBNuxServerContext> {

	NSArray* _promotionEntities;

}

@property (nonatomic,retain) NSArray * promotionEntities;              //@synthesize promotionEntities=_promotionEntities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)promotionEntityWithParameters:(id)arg1 ;
-(void)parseParameters:(id)arg1 ;
-(id)initWithNuxParameters:(id)arg1 ;
-(NSArray *)promotionEntities;
-(void)setPromotionEntities:(NSArray *)arg1 ;
@end
