/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/GADRequest.h>

@class NSString, NSArray, NSDictionary;

@interface DFPRequest : GADRequest {

	NSString* _publisherProvidedID;
	NSArray* _categoryExclusions;

}

@property (nonatomic,copy) NSString * publisherProvidedID;              //@synthesize publisherProvidedID=_publisherProvidedID - In the implementation block
@property (nonatomic,copy) NSArray * categoryExclusions;                //@synthesize categoryExclusions=_categoryExclusions - In the implementation block
@property (nonatomic,copy) NSDictionary * customTargeting; 
+(void)updateCorrelator;
-(id)threadSafeParameters;
-(void)setPublisherProvidedID:(NSString *)arg1 ;
-(void)setCategoryExclusions:(NSArray *)arg1 ;
-(NSString *)publisherProvidedID;
-(NSArray *)categoryExclusions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end
