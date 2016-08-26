/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryEntityMapProtocol.h>

@class NSArray, NSString;

@interface FBRichStoryEntityMap : NSObject <FBRichStoryEntityMapProtocol> {

	unsigned long long _mapType;
	NSArray* _annotations;
	SCD_Struct_FB5 _region;

}

@property (assign,nonatomic) SCD_Struct_FB5 region;                   //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,copy) NSArray * annotations;                     //@synthesize annotations=_annotations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mapWithRegion:(SCD_Struct_FB5)arg1 mapType:(unsigned long long)arg2 annotations:(id)arg3 ;
-(id)initWithRegion:(SCD_Struct_FB5)arg1 mapType:(unsigned long long)arg2 annotations:(id)arg3 ;
-(void)setRegion:(SCD_Struct_FB5)arg1 ;
-(SCD_Struct_FB5)region;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(NSArray *)annotations;
-(void)setAnnotations:(NSArray *)arg1 ;
@end
