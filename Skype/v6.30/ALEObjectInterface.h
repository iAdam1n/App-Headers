/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/ALERootObject.h>

@interface ALEObjectInterface : ALERootObject {

	BOOL ownObjectInterfaceObj;
	ObjectInterfaceWrapper* objectinterfaceWrapper;

}
+(long long)typeForKey:(int)arg1 ;
-(unsigned)GetIntProperty:(int)arg1 andDefaultvalue:(unsigned)arg2 ;
-(BOOL)SetExtendedProperty:(id)arg1 ;
-(BOOL)SetExtendedProperty2:(int)arg1 andValue:(id)arg2 ;
-(unsigned long long)GetInt64Property:(int)arg1 andDefaultvalue:(unsigned)arg2 ;
-(id)aleValueForKey:(int)arg1 ;
-(id)initAsParent;
-(id)initWithoutSkylibObject;
-(void*)skylibObj;
-(BOOL)GetBinProperty:(int)arg1 andValue:(id*)arg2 ;
-(unsigned)GetDbID;
-(BOOL)GetFilenameProperty:(int)arg1 andValue:(id*)arg2 ;
-(unsigned long long)GetInt64Property:(int)arg1 ;
-(unsigned)GetIntProperty:(int)arg1 ;
-(unsigned)GetObjectID;
-(BOOL)GetProperty:(int)arg1 andProperty:(id)arg2 ;
-(BOOL)GetPropertyOrDefault:(int)arg1 andProperty:(id)arg2 ;
-(id)GetStrProperty:(int)arg1 andValue:(id*)arg2 ;
-(id)GetStrProperty:(int)arg1 andValue:(id*)arg2 andDefaultvalue:(id)arg3 ;
-(id)GetStrPropertyWithXmlStripped:(int)arg1 andDefaultvalue:(id)arg2 ;
-(BOOL)SetExtendedProperty:(int)arg1 andValue:(unsigned)arg2 ;
-(void)Unlink;
-(id)init;
-(void)dealloc;
@end
