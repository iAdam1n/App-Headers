/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/SASVASTAd.h>

@class NSMutableArray;

@interface SASVASTAdInline : SASVASTAd {

	NSMutableArray* _mediaFiles;

}

@property (nonatomic,readonly) NSMutableArray * mediaFiles;              //@synthesize mediaFiles=_mediaFiles - In the implementation block
-(id)nextActionURL;
-(void)sortMediaFiles;
-(id)dequeueMediaFileFromArray:(id)arg1 ;
-(BOOL)mediaFileMatchesMaximalCondition:(id)arg1 ;
-(BOOL)mediaFileMatchesMinimalCondition:(id)arg1 ;
-(BOOL)isMediaFileQueueEmpty:(id)arg1 ;
-(id)mostAppropriateMediaFile;
-(CGSize)mediaAspectRatio;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)mediaFiles;
-(BOOL)isInline;
@end
