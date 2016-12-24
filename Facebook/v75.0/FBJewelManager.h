/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBJewelNetworkDataSource;
@class FBJewelState, FBJewelController;

@interface FBJewelManager : NSObject {

	id<FBJewelNetworkDataSource> _networkDataSource;
	FBJewelState* _jewelState;
	FBJewelController* _jewelController;

}

@property (nonatomic,readonly) id<FBJewelNetworkDataSource> networkDataSource;              //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (nonatomic,readonly) FBJewelState * jewelState;                                   //@synthesize jewelState=_jewelState - In the implementation block
@property (assign,nonatomic,__weak) FBJewelController * jewelController;                    //@synthesize jewelController=_jewelController - In the implementation block
-(id)initWithNetworkDataSource:(id)arg1 ;
-(void)setJewelController:(FBJewelController *)arg1 ;
-(FBJewelController *)jewelController;
-(id<FBJewelNetworkDataSource>)networkDataSource;
-(FBJewelState *)jewelState;
@end
