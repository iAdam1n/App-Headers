/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, GAIEcommerceProductAction;

@interface GAIDictionaryBuilder : NSObject {

	NSMutableDictionary* _parameters;
	NSMutableDictionary* _impressionLists;
	NSMutableArray* _impressionListNames;
	NSMutableArray* _impressionListSources;
	NSMutableArray* _products;
	NSMutableArray* _promotions;
	GAIEcommerceProductAction* _pAction;

}

@property (nonatomic,retain) NSMutableDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * impressionLists;               //@synthesize impressionLists=_impressionLists - In the implementation block
@property (nonatomic,retain) NSMutableArray * impressionListNames;                //@synthesize impressionListNames=_impressionListNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * impressionListSources;              //@synthesize impressionListSources=_impressionListSources - In the implementation block
@property (nonatomic,retain) NSMutableArray * products;                           //@synthesize products=_products - In the implementation block
@property (nonatomic,retain) NSMutableArray * promotions;                         //@synthesize promotions=_promotions - In the implementation block
@property (nonatomic,retain) GAIEcommerceProductAction * pAction;                 //@synthesize pAction=_pAction - In the implementation block
+(id)valueForNumber:(id)arg1 ;
+(id)gai_exceptionWithDescription:(id)arg1 withFatal:(id)arg2 ;
+(id)createAppView;
+(id)createScreenView;
+(id)createEventWithCategory:(id)arg1 action:(id)arg2 label:(id)arg3 value:(id)arg4 ;
+(id)createExceptionWithDescription:(id)arg1 withFatal:(id)arg2 ;
+(id)createItemWithTransactionId:(id)arg1 name:(id)arg2 sku:(id)arg3 category:(id)arg4 price:(id)arg5 quantity:(id)arg6 currencyCode:(id)arg7 ;
+(id)createSocialWithNetwork:(id)arg1 action:(id)arg2 target:(id)arg3 ;
+(id)createTimingWithCategory:(id)arg1 interval:(id)arg2 name:(id)arg3 label:(id)arg4 ;
+(id)createTransactionWithId:(id)arg1 affiliation:(id)arg2 revenue:(id)arg3 tax:(id)arg4 shipping:(id)arg5 currencyCode:(id)arg6 ;
+(id)valueForString:(id)arg1 ;
-(id)get:(id)arg1 ;
-(id)gai_set:(id)arg1 forKey:(id)arg2 ;
-(GAIEcommerceProductAction *)pAction;
-(NSMutableArray *)promotions;
-(NSMutableArray *)impressionListNames;
-(NSMutableArray *)impressionListSources;
-(NSMutableDictionary *)impressionLists;
-(void)setPAction:(GAIEcommerceProductAction *)arg1 ;
-(id)set:(id)arg1 forKey:(id)arg2 ;
-(id)setCampaignParametersFromUrl:(id)arg1 ;
-(id)setProductAction:(id)arg1 ;
-(id)addProduct:(id)arg1 ;
-(id)addProductImpression:(id)arg1 impressionList:(id)arg2 impressionSource:(id)arg3 ;
-(id)addPromotion:(id)arg1 ;
-(void)setImpressionLists:(NSMutableDictionary *)arg1 ;
-(void)setImpressionListNames:(NSMutableArray *)arg1 ;
-(void)setImpressionListSources:(NSMutableArray *)arg1 ;
-(void)setPromotions:(NSMutableArray *)arg1 ;
-(void)setProducts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)products;
-(id)init;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(id)setAll:(id)arg1 ;
-(id)build;
@end

