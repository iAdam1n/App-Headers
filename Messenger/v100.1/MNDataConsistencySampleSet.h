/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNDataConsistencySnapshotDataset;

@interface MNDataConsistencySampleSet : FBValueObject <NSCopying> {

	MNDataConsistencySnapshotDataset* _clientSnapshot;
	MNDataConsistencySnapshotDataset* _serverSnapshot;

}

@property (nonatomic,copy,readonly) MNDataConsistencySnapshotDataset * clientSnapshot;              //@synthesize clientSnapshot=_clientSnapshot - In the implementation block
@property (nonatomic,copy,readonly) MNDataConsistencySnapshotDataset * serverSnapshot;              //@synthesize serverSnapshot=_serverSnapshot - In the implementation block
-(id)initWithClientSnapshot:(id)arg1 serverSnapshot:(id)arg2 ;
-(MNDataConsistencySnapshotDataset *)clientSnapshot;
-(MNDataConsistencySnapshotDataset *)serverSnapshot;
@end
