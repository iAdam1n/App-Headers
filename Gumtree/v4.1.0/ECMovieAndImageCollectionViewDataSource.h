/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECImageViewCollectionViewDataSource.h>
#import <Gumtree/YTPlayerViewDelegate.h>

@class NSArray, NSString;

@interface ECMovieAndImageCollectionViewDataSource : ECImageViewCollectionViewDataSource <YTPlayerViewDelegate> {

	NSArray* _movieArray;

}

@property (nonatomic,retain) NSArray * movieArray;                  //@synthesize movieArray=_movieArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playerView:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)playerView:(id)arg1 receivedError:(long long)arg2 ;
-(unsigned long long)imageIndexForAbsoluteIndex:(unsigned long long)arg1 ;
-(unsigned long long)absoluteIndexForImageIndex:(unsigned long long)arg1 ;
-(id)initWithMovieArray:(id)arg1 andImageURLArray:(id)arg2 ;
-(NSArray *)movieArray;
-(void)trackActionVideoPlay;
-(void)trackActionVideoFailWithErrorLabel:(id)arg1 ;
-(void)trackYTPlayerError:(long long)arg1 ;
-(void)setMovieArray:(NSArray *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

