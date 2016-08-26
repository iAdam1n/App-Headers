/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarTaggingTagSearchDataSource.h>

@class NSPredicate;

@interface FBAvatarPickerControllerDataSource : FBAvatarTaggingTagSearchDataSource {

	NSPredicate* _predicate;

}

@property (assign,nonatomic,__weak) id<UITableViewDataSource><FBAvatarTaggingSectionDataSourceDelegate> delegate; 
@property (nonatomic,retain) NSPredicate * predicate;                                                                          //@synthesize predicate=_predicate - In the implementation block
-(void)searchProviderHasAvatars:(id)arg1 andStubs:(id)arg2 forText:(id)arg3 fromRemote:(BOOL)arg4 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSearchText:(id)arg1 ;
@end
