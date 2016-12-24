/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNGroupsRowsViewModel;

@interface MNGroupsViewModel : FBValueObject <NSCopying> {

	MNGroupsRowsViewModel* _groupThreads;
	MNGroupsRowsViewModel* _rooms;
	MNGroupsRowsViewModel* _suggestedRooms;

}

@property (nonatomic,copy,readonly) MNGroupsRowsViewModel * groupThreads;                //@synthesize groupThreads=_groupThreads - In the implementation block
@property (nonatomic,copy,readonly) MNGroupsRowsViewModel * rooms;                       //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,copy,readonly) MNGroupsRowsViewModel * suggestedRooms;              //@synthesize suggestedRooms=_suggestedRooms - In the implementation block
-(MNGroupsRowsViewModel *)groupThreads;
-(MNGroupsRowsViewModel *)suggestedRooms;
-(id)initWithGroupThreads:(id)arg1 rooms:(id)arg2 suggestedRooms:(id)arg3 ;
-(MNGroupsRowsViewModel *)rooms;
@end
