/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/IFlurryCacheKey.h>

@class NSString;

@interface FlurryOrientationAgnosticCacheKey : NSObject <IFlurryCacheKey> {

	int _orientation;
	NSString* adSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * adSpace; 
@property (assign,nonatomic) int orientation;                       //@synthesize orientation=_orientation - In the implementation block
+(BOOL)isPortrait:(long long)arg1 ;
+(id)withSpace:(id)arg1 ;
+(id)withSpace:(id)arg1 andOrientation:(int)arg2 ;
+(id)withSpace:(id)arg1 andInterfaceOrientation:(long long)arg2 ;
-(id)initWithSpace:(id)arg1 andInterfaceOrientation:(long long)arg2 ;
-(id)initWithSpace:(id)arg1 andOrientation:(int)arg2 ;
-(id)reoriented;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)adSpace;
-(void)setAdSpace:(NSString *)arg1 ;
@end

