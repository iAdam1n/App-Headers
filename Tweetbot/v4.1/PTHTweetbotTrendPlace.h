/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface PTHTweetbotTrendPlace : NSObject <NSCoding> {

	unsigned long long _woeID;
	unsigned long long _parentWOEID;
	NSString* _name;
	PTHTweetbotTrendPlace* _parent;
	NSArray* _children;

}

@property (assign,nonatomic) unsigned long long woeID;                           //@synthesize woeID=_woeID - In the implementation block
@property (assign,nonatomic) unsigned long long parentWOEID;                     //@synthesize parentWOEID=_parentWOEID - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotTrendPlace * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * children;                                 //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) BOOL isWorld; 
-(unsigned long long)woeID;
-(void)setWoeID:(unsigned long long)arg1 ;
-(BOOL)isWorld;
-(void)updateFromDictionary:(id)arg1 ;
-(unsigned long long)parentWOEID;
-(void)setParentWOEID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setChildren:(NSArray *)arg1 ;
-(PTHTweetbotTrendPlace *)parent;
-(NSArray *)children;
-(void)setParent:(PTHTweetbotTrendPlace *)arg1 ;
@end

