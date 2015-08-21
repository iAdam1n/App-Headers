/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface MGXProject : NSObject {

	NSString* _path;
	NSMutableArray* _compositions;
	NSMutableArray* _productionCompositions;

}

@property (nonatomic,copy) NSString * path;                                        //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableArray * compositions;                        //@synthesize compositions=_compositions - In the implementation block
@property (nonatomic,retain) NSMutableArray * productionCompositions;              //@synthesize productionCompositions=_productionCompositions - In the implementation block
+(id)productionCompositionNamed:(id)arg1 ;
+(id)projectWithContentsOfFile:(id)arg1 ;
+(id)projectSearchPaths;
+(id)buneledProjectFiles;
+(id)projectNamed:(id)arg1 ;
-(NSMutableArray *)compositions;
-(id)compositionNamed:(id)arg1 ;
-(id)productionCompositionNamed:(id)arg1 ;
-(id)initWithAfterEffectsProject:(id)arg1 ;
-(id)compositionWithAfterEffectsComposition:(id)arg1 inProject:(id)arg2 ;
-(id)compositionWithName:(id)arg1 inArray:(id)arg2 ;
-(void)setCompositions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)productionCompositions;
-(void)setProductionCompositions:(NSMutableArray *)arg1 ;
-(NSString *)path;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
@end

