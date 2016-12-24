/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPEmoticon.h>
#import <Skype/SKPExpressionProtocol.h>

@class NSString, NSArray;

@interface SKPFlagEmoticon : SKPEmoticon <SKPExpressionProtocol> {

	NSString* _filePath;

}

@property (nonatomic,retain) NSString * filePath;                              //@synthesize filePath=_filePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long expressionType; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,readonly) NSArray * shortcuts; 
-(id)initWithIdentifier:(id)arg1 filePath:(id)arg2 ;
-(id)localizedLongName;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)localizedName;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)imageWithSize:(CGSize)arg1 ;
-(unsigned long long)expressionType;
-(id)shortcut;
@end
