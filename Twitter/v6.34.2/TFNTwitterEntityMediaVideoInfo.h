/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCoding.h>
#import <Twitter/NSCopying.h>
#import <Twitter/TFNPlistSerialization.h>

@class NSArray, NSString;

@interface TFNTwitterEntityMediaVideoInfo : NSObject <NSCoding, NSCopying, TFNPlistSerialization> {

	float _aspectRatio;
	double _duration;
	NSArray* _variants;

}

@property (nonatomic,readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float aspectRatio;                   //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) NSArray * variants;                  //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) NSString * primaryUrl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_contentTypeOrder;
-(id)preferredVariantURLForNetworkStatus:(int)arg1 radioTech:(int)arg2 ;
-(id)_hlsParamForNetworkStatus:(int)arg1 radioTech:(int)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSString *)primaryUrl;
-(void)_parseVariants:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)aspectRatio;
-(NSArray *)variants;
@end

