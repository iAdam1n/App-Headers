/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBFriendingStatefulWriteInterface;

@interface FBPeopleSearchDataSourceHelper : NSObject {

	FBFriendingStatefulWriteInterface* _statefulWriteInterface;

}

@property (nonatomic,readonly) FBFriendingStatefulWriteInterface * statefulWriteInterface;              //@synthesize statefulWriteInterface=_statefulWriteInterface - In the implementation block
-(FBFriendingStatefulWriteInterface *)statefulWriteInterface;
-(id)initWithStatefulWriteInterface:(id)arg1 ;
-(void)insertSearchResults:(id)arg1 ;
-(void)updateSearchResult:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)clearPreviousSearchResults;
-(void)_insertSectionIfNecessaryWithChangesetSections:(Sections*)arg1 ;
-(id)resultAtIndex:(long long)arg1 ;
@end
