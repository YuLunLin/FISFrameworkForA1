//
//  FISFrameworkForA1.h
//  FISFrameworkForA1
//
//  Created by Li Richard on 12-8-1.
//  Copyright (c) 2012年 IAC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISFrameworkForA1 : NSObject
-(id)init;
//-(void)dealloc;

- (NSString *)CheckAOISNoWc:(NSString *)AOISNo stationName:(NSString *)testStation;
- (NSString *)CheckCMBSNoWc:(NSString *)CMBSNo stationName:(NSString *)testStation;
- (NSString *)UploadTestResultCMBSNo:(NSString *)MLBSNotestResult stationName:(NSString *)testStation;

- (NSString *)UploadFailItemCMBSNo:(NSString *)MLBSNo stationName:(NSString *)testStation SWVersion:(NSString *)version linename:(NSString *)lineName testitem:(NSString *)testItem testvalue:(NSString *)testValue unit:(NSString *)Unit uplimit:(id)Up_LIM downlimit:(id)Down_LIM;

// 用途:check FGSN(客戶序號)
// 輸入:FGSN(客戶序號) ＆ station name & Model Name(MPN BURN才需輸入)
// 輸出:以Array方式輸出, array[0]為0(成功)或1(失敗), array[1]為錯誤訊息, array[2]為MLB序號
- (NSArray *)CheckCFGSNWCRetCMBSN:(NSString *)FGSN station:(NSString *)stationName ModelName:(NSString *)modelName;

- (NSString *)GetServerName;
- (NSString *)GetDBName;
- (NSString *)GetServerDate;

@end
