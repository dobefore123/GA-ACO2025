cmake_minimum_required(VERSION 3.10)
project(genetic-ant-colony)

find_package(ns3 REQUIRED)

ns3_add_module(genetic-ant-colony
    SOURCES
        model/genetic-ant-colony.cc
    HEADERS
        model/genetic-ant-colony.h
)
