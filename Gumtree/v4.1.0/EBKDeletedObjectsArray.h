/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface EBKDeletedObjectsArray : NSObject {

	long long _count;
	NSMutableSet* _mutableDeletedIndexes;

}

@property (nonatomic,copy,readonly) NSSet * deletedIndexes; 
@property (assign,nonatomic) long long count;                                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableDeletedIndexes;              //@synthesize mutableDeletedIndexes=_mutableDeletedIndexes - In the implementation block
@property (nonatomic,readonly) long long maxIndex; 
@property (nonatomic,readonly) long long minIndex; 
-(NSMutableSet *)mutableDeletedIndexes;
-(long long)afterIndex:(long long)arg1 ;
-(long long)beforeIndex:(long long)arg1 ;
-(long long)maxIndex;
-(BOOL)isDeletedIndex:(long long)arg1 ;
-(long long)minIndex;
-(long long)countOfNotDeletedIndexes;
-(long long)deleteIndex:(long long)arg1 ;
-(long long)updatedIndexForIndex:(long long)arg1 ;
-(void)setMutableDeletedIndexes:(NSMutableSet *)arg1 ;
-(id)initWithCount:(long long)arg1 ;
-(NSSet *)deletedIndexes;
-(long long)count;
-(void)setCount:(long long)arg1 ;
@end
