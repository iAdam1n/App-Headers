/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBGraphQLConnectionControllerListener <NSObject>
@optional
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byStartingLoadAtLocation:(id)arg3 userInfo:(id)arg4;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 bySucceedingToLoadAtLocation:(id)arg3 userInfo:(id)arg4;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byFailingToLoadAtLocation:(id)arg3 error:(id)arg4 userInfo:(id)arg5;
-(void)graphQLConnectionController:(id)arg1 handledLoadRequestAtLocation:(id)arg2 order:(unsigned long long)arg3 limits:(id)arg4 userInfo:(id)arg5;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byCancellingLoadAtLocation:(id)arg3 userInfo:(id)arg4;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousStateByUpdatingLocation:(id)arg2;

@end
