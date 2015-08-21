/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/NSCopying.h>

@class NSString, NSDictionary;

@interface DCTActivityRequest : NSObject <NSCopying> {

	NSString* _adUnitID;
	NSString* _publisherProvidedID;
	NSDictionary* _customParameters;

}

@property (nonatomic,copy,readonly) NSString * adUnitID;                          //@synthesize adUnitID=_adUnitID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherProvidedID;               //@synthesize publisherProvidedID=_publisherProvidedID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customParameters;              //@synthesize customParameters=_customParameters - In the implementation block
+(id)requestWithAdUnitID:(id)arg1 publisherProvidedID:(id)arg2 customParameters:(id)arg3 ;
-(id)initWithAdUnitID:(id)arg1 publisherProvidedID:(id)arg2 customParameters:(id)arg3 ;
-(NSString *)adUnitID;
-(NSString *)publisherProvidedID;
-(NSDictionary *)customParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
