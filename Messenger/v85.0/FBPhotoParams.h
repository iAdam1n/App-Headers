/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDialogsParams.h>

@class NSArray;

@interface FBPhotoParams : FBDialogsParams {

	BOOL _dataFailuresFatal;
	NSArray* _friends;
	id _place;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * friends;                     //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) id place;                              //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) BOOL dataFailuresFatal;              //@synthesize dataFailuresFatal=_dataFailuresFatal - In the implementation block
@property (nonatomic,copy) NSArray * photos;                      //@synthesize photos=_photos - In the implementation block
+(id)methodName;
-(id)dictionaryMethodArgs;
-(BOOL)dataFailuresFatal;
-(void)setDataFailuresFatal:(BOOL)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(id)initWithPhotos:(id)arg1 ;
-(NSArray *)friends;
@end
