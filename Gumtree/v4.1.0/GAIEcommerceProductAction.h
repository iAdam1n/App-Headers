/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GAIEcommerceProductAction : NSObject {

	NSMutableDictionary* _parameters;

}

@property (nonatomic,retain) NSMutableDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(id)setCouponCode:(id)arg1 ;
-(id)setAffiliation:(id)arg1 ;
-(id)setRevenue:(id)arg1 ;
-(id)setTax:(id)arg1 ;
-(id)setShipping:(id)arg1 ;
-(id)setCheckoutStep:(id)arg1 ;
-(id)setCheckoutOption:(id)arg1 ;
-(id)setProductActionList:(id)arg1 ;
-(id)setProductListSource:(id)arg1 ;
-(id)init;
-(id)setAction:(id)arg1 ;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(id)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)build;
-(id)setString:(id)arg1 forKey:(id)arg2 ;
-(id)setTransactionId:(id)arg1 ;
@end
