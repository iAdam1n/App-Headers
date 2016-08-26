/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LoginTracker : NSObject {

	unsigned long long _initialState;
	NSString* _originScreen;

}

@property (assign,nonatomic) unsigned long long initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSString * originScreen;                      //@synthesize originScreen=_originScreen - In the implementation block
-(BOOL)canTrackState:(unsigned long long)arg1 ;
-(NSString *)originScreen;
-(void)setOriginScreen:(NSString *)arg1 ;
-(void)setInitialState:(unsigned long long)arg1 ;
-(unsigned long long)initialState;
@end
