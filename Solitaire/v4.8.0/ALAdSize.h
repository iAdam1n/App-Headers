/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ALAdSize : NSObject <NSCopying> {

	unsigned long long width;
	unsigned long long height;
	NSString* label;

}

@property (nonatomic,copy,readonly) NSString * label; 
@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
+(id)sizeInterstitial;
+(id)sizeWithLabel:(id)arg1 orDefault:(id)arg2 ;
+(id)sizeBanner;
+(id)sizeMRec;
+(id)sizeLeader;
+(id)allSizes;
+(void)initialize;
-(BOOL)isEqualToSize:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(NSString *)label;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithLabel:(id)arg1 ;
@end

