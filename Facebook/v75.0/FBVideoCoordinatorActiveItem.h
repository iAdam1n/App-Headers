/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoCoordinatorPlayerContainer;
@class NSIndexPath;

@interface FBVideoCoordinatorActiveItem : NSObject {

	id<FBVideoCoordinatorPlayerContainer> _playerContainer;
	NSIndexPath* _indexPath;

}

@property (nonatomic,copy) id<FBVideoCoordinatorPlayerContainer> playerContainer;              //@synthesize playerContainer=_playerContainer - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
-(id)initWithPlayerContainer:(id)arg1 indexPath:(id)arg2 ;
-(id<FBVideoCoordinatorPlayerContainer>)playerContainer;
-(void)setPlayerContainer:(id<FBVideoCoordinatorPlayerContainer>)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end
