/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemListViewModel.h>

@class NSMutableDictionary;

@interface ECSavedSearchViewModel : ECItemListViewModel {

	NSMutableDictionary* _imagesURLsForSavedSearch;

}

@property (nonatomic,retain) NSMutableDictionary * imagesURLsForSavedSearch;              //@synthesize imagesURLsForSavedSearch=_imagesURLsForSavedSearch - In the implementation block
-(id)initWithDataProvider:(id)arg1 andDelegate:(id)arg2 ;
-(void)viewWillAppearAction;
-(void)handleLoginChangeNotification:(id)arg1 ;
-(void)viewWillDisappearAction;
-(void)handleDeleteItemAtPosition:(id)arg1 requireConfirmation:(BOOL)arg2 ;
-(void)setImagesURLsForSavedSearch:(NSMutableDictionary *)arg1 ;
-(void)handleSavedSearchesDidChangeNotification;
-(void)continueWithDeletion:(id)arg1 ;
-(void)didSelectSearchAtIndexPath:(id)arg1 ;
-(NSMutableDictionary *)imagesURLsForSavedSearch;
@end

