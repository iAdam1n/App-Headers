/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BaseModel : NSObject {

	long long _dbId;

}

@property (assign) long long dbId;              //@synthesize dbId=_dbId - In the implementation block
-(void)saveInDatabase:(id)arg1 ;
-(void)insertIntoDatabase:(id)arg1 ;
-(void)updateDatabase:(id)arg1 ;
-(id)getModelAsDictionaryWithOptionalId:(BOOL)arg1 ;
-(void)setDbId:(long long)arg1 ;
-(void)saveInDatabase;
-(void)removeFromDatabase;
-(id)getTableName;
-(id)getModelAsDictionary;
-(long long)dbId;
@end
