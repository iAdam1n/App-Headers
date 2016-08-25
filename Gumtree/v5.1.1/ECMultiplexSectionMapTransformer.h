/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapTransformer.h>

@class NSArray;

@interface ECMultiplexSectionMapTransformer : ECSectionMapTransformer {

	BOOL _includeEmptySections;
	NSArray* _sources;

}

@property (nonatomic,copy) NSArray * sources;                        //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic) BOOL includeEmptySections;              //@synthesize includeEmptySections=_includeEmptySections - In the implementation block
-(BOOL)includeEmptySections;
-(void)setIncludeEmptySections:(BOOL)arg1 ;
-(void)setSectionMap:(id)arg1 ;
-(id)sectionMap;
-(void)addSource:(id)arg1 ;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
@end

