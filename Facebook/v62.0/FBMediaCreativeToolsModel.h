/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMediaCreativeToolFilter, FBMediaCreativeToolMask, NSArray, NSDictionary, NSNumber;

@interface FBMediaCreativeToolsModel : NSObject <NSCopying> {

	FBMediaCreativeToolFilter* _identityFilter;
	FBMediaCreativeToolMask* _identityMask;
	NSArray* _filters;
	NSArray* _masks;
	NSArray* _drawColors;
	unsigned long long _strokeCount;
	NSArray* _mlModelAssets;
	NSDictionary* _customTools;

}

@property (nonatomic,copy,readonly) NSArray * sportsMatches; 
@property (assign,nonatomic) NSNumber * selectedSportsFilterIndex; 
@property (nonatomic,readonly) unsigned long long numberOfTools; 
@property (nonatomic,copy,readonly) NSArray * filters;                          //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * drawColors;                       //@synthesize drawColors=_drawColors - In the implementation block
@property (assign,nonatomic) unsigned long long strokeCount;                    //@synthesize strokeCount=_strokeCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mlModelAssets;                    //@synthesize mlModelAssets=_mlModelAssets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * masks;                            //@synthesize masks=_masks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customTools;                 //@synthesize customTools=_customTools - In the implementation block
-(NSNumber *)selectedSportsFilterIndex;
-(void)setSelectedSportsFilterIndex:(NSNumber *)arg1 ;
-(NSArray *)sportsMatches;
-(id)modelByAddingSportsMatches:(id)arg1 ;
-(NSArray *)masks;
-(NSArray *)drawColors;
-(NSArray *)mlModelAssets;
-(id)modelByAddingCustomTools:(id)arg1 ;
-(NSDictionary *)customTools;
-(unsigned long long)numberOfTools;
-(id)initWithFilters:(id)arg1 drawColors:(id)arg2 mlModelAssets:(id)arg3 masks:(id)arg4 customTools:(id)arg5 ;
-(void)setStrokeCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)filters;
-(unsigned long long)strokeCount;
@end
